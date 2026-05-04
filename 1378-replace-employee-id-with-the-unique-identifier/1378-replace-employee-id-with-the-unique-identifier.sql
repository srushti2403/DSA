# Write your MySQL query statement below
SELECT ep.unique_id, e.name
FROM Employees AS e
LEFT JOIN EmployeeUNI AS ep on e.id = ep.id;