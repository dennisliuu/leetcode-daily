# Write your MySQL query statement below
Select IFNULL((Select Distinct Salary  from Employee Order by Salary Desc LIMIT 1,1), NULL) As SecondHighestSalary
