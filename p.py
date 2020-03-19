class Paint: 

    def __init__(self, row, col, arr): 
        self.ROW = row 
        self.COL = col 
        self.arr = arr

    def visit(self, i, j, visited):
        ele = self.arr[i][j]
        for k in range(i,self.ROW):
            for l in range(j, self.COL):
               if self.arr[k][l]==ele:
                   visited[k][l]=True
                   v=l
                   if l>0 and self.arr[k][l-1]==ele and not visited[k][l-1]:
                       self.visit(k, l-1, visited)
                   if k>0 and self.arr[k-1][l]==ele and not visited[k-1][l]:
                       self.visit(k-1, l, visited)
               elif l>=v:
                   break
    # 2D matrix 
    def count_cells(self): 
        # Make an array to mark visited cells. 
        # Initially all cells are unvisited 
        visited = [[False for j in range(self.COL)]for i in range(self.ROW)] 

        # Initialize count as 0 and travese 
        count = 0
        for i in range(self.ROW): 
            for j in range(self.COL): 
                # If a cell value false then not visited yet 
                # then visit
                if visited[i][j] == False: 
                    # Visit all cells in the array
                    self.visit(i, j, visited)
                    print(visited)
                    count += 1

        return count 


# arr = ["aabba", "aabba", "aaacb"]
n=int(input())
arr=[]
while n>0:
    arr.append(input())
    n-=1
row = len(arr) 
col = len(arr[0]) 

p = Paint(row, col, arr) 

print (p.count_cells())