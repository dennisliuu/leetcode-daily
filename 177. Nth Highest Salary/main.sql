CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  SET N = N-1;
  RETURN (
      # Write your MySQL query statement below.
      Select IFNULL((Select Distinct Salary  from Employee Order by Salary Desc LIMIT N, 1), NULL)
  );
END