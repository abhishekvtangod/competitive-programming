document.getElementById("type_writer_div").style.display = "none";
document.getElementById("problem_stable").style.display = "none";
document.getElementById("problem_ustable").style.display = "none";
document.getElementById('submit').addEventListener('click', fetchUserData);



function fetchUserData(){
  var a = document.getElementById("auth_id").value;
  document.getElementById("ip").style.display = "none"

    fetch('https://codeforces.com/api/user.status?handle='+a+'&from=1&count=100000')
        .then(response => response.json())
        .then(function(json){

      var arr = json["result"];
      var problems_solved=[];
      var problems_unsolved=[];
      var count=0;
      for(let i = 0; i < arr.length; i++)	
      {	

        if(arr[i]["verdict"] === "OK")
        {		
          problems_solved.push({"problem" : ""+arr[i]["problem"]["name"],"index":arr[i]["problem"]["index"], "contest_id": arr[i]["contestId"]});
          
          count++;
        }		
        else
        {
          problems_unsolved.push({"problem" : ""+arr[i]["problem"]["name"],"index":arr[i]["problem"]["index"], "contest_id": arr[i]["contestId"]});

        }
      }
      //Important operation to delete duplicate objects
      problems_solved = Array.from(new Set(problems_solved.map(JSON.stringify))).map(JSON.parse);
      problems_unsolved = Array.from(new Set(problems_unsolved.map(JSON.stringify))).map(JSON.parse);
      console.log(problems_solved);
      console.log(problems_unsolved);

        var typ= problems_solved.length+' problems solved';



        var str ='';
        var u_str ='';


        var cnt =1;
        problems_solved.forEach(function(arr_ele) {
          
          str += 
          '<tr>'+    
          '<th scope="row">'+(cnt++)+'</th>' +
          '<td><a href="https://codeforces.com/problemset/problem/'+arr_ele.contest_id+'/'+arr_ele.index+'"  target="_blank">'+ arr_ele.problem + '</a></td>' +
          '<td>'+ arr_ele.index + '</td>' +
        
          '</tr>'
        }); 
        cnt = 1;
        problems_unsolved.forEach(function(arr_ele) {
          
          u_str += 
          '<tr>'+    
          '<th scope="row">'+(cnt++)+'</th>' +
          '<td><a href="https://codeforces.com/problemset/problem/'+arr_ele.contest_id+'/'+arr_ele.index+'"  target="_blank">'+ arr_ele.problem + '</a></td>' +
          '<td>'+ arr_ele.index + '</td>' +
        
          '</tr>'
        }); 

        document.getElementById("type_writer").innerHTML = typ;    
        document.getElementById("type_writer_div").style.display = "block";

        document.getElementById("solved_list").innerHTML = str;
        document.getElementById("unsolved_list").innerHTML = u_str;
        document.getElementById("problem_stable").style.display = "block";
        document.getElementById("problem_ustable").style.display = "block";

         }
        )
        
}
