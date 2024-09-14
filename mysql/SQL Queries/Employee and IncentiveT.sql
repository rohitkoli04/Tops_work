CREATE DATABASE comi; 
use comi;
CREATE TABLE employ(
employee_id INT PRIMARY KEY,first_name VARCHAR(50),last_name VARCHAR (50),salary INT ,joining_date date ,department VARCHAR(50)
);
INSERT INTO Employ(Employee_id, First_name, Last_name, Salary, Joining_date, Department) VALUES

(1, 'John', 'Abraham', 1000000, '2013-01-13', 'Banking'),

(2, 'Michael', 'Clarke', 800000, '2013-01-13', 'Insurance'),

(3, 'Roy', 'Thomas', 700000, '2013-02-13', 'Banking'),

(4, 'Tom', 'Jose', 600000, '2013-02-13', 'Insurance'),

(5, 'Jerry', 'Pinto', 650000, '2013-02-13', 'Insurance'),

(6, 'Philip', 'Mathew', 750000, '2013-01-13', 'Services'),

(7, 'TestName1', '123', 650000, '2013-01-13', 'Services'),

(8, 'TestName2', 'Lname%', 600000, '2013-02-13', 'Insurance');

create table incentive(
employee_ref_id INT,
incentive_date DATE,
incentive_amount INT
);
INSERT INTO Incentive (Employee_ref_id, Incentive_date, Incentive_amount) VALUES

(1, '2013-02-13', 5000),

(2, '2013-02-13', 3000),

(3, '2013-02-13', 4000),

(1, '2013-01-13', 4500),

(2, '2013-01-13', 3500);


-- Get First_Name from employee table using Tom name “Employee Name”.
SELECT First_Name FROM Employ WHERE Last_Name = "Jose";

select first_name,joining_date,salary from employ;

select * from employ order by first_name asc,salary asc ;


select * from employ where first_name like 'J%';

select department,max(salary) as max_salary from employ
group by department order by max_salary;

SELECT e.first_name, i.incentive_amount FROM employ e
JOIN incentive i ON e.employee_id = i.employee_ref_id
WHERE i.incentive_amount > 3000;

CREATE TRIGGER tr_Employee_Incentive
AFTER INSERT ON Employee
FOR EACH ROW
BEGIN
  -- .
  INSERT INTO Incentive (Employee_ref_id, Incentive_date, Incentive_amount)
  VALUES (NEW.Employee_id, '2013-02-13', 5000)
  end;
  