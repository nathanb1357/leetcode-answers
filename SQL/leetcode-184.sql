USE LeetcodeDB

SELECT D.name AS Department, E.name AS Employee, E.salary AS Salary
FROM Employee E, Department D
WHERE E.departmentId = D.id 
    AND E.salary = (
        SELECT MAX(salary)
        FROM Employee
        WHERE Employee.departmentId = E.departmentId
    )