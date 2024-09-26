create database lis;
use lis;
CREATE TABLE products (
  pro_id INT PRIMARY KEY,
  pro_name VARCHAR(255),
  pro_price DECIMAL(10, 2),
  pro_com INT
);

INSERT INTO products (pro_id, pro_name, pro_price, pro_com) VALUES
  (101, 'Mother Board', 3200.00, 15),
  (102, 'Key Board', 450.00, 16),
  (103, 'ZIP drive', 250.00, 14),
  (104, 'Speaker', 550.00, 16),
  (105, 'Monitor', 5000.00, 11),
  (106, 'DVD drive', 900.00, 12),
  (107, 'CD drive', 800.00, 12),
  (108, 'Printer', 2600.00, 13),
  (109, 'Refill cartridge', 350.00, 13),
  (110, 'Mouse', 250.00, 12);
  
  /*From the following table, write a SQL query to select a range of
products whose price is in the range Rs.200 to Rs.600. Begin and end
values are included. Return pro_id, pro_name, pro_price,
 and pro_com.*/
 
 select  pro_id, pro_name, pro_price,  pro_com
 from  products
where  pro_price  between 200 and 600;



SELECT AVG(pro_price) AS average_price
FROM products
WHERE pro_com = 16;
SELECT 
    pro_name AS 'Item Name', 
    pro_price AS 'Price in Rs.' 
FROM products;

select pro_name
pro_price
from products
where pro_price <=250.00
order by pro_price asc,
pro_name desc;

SELECT 
  pro_com AS company_code, 
    AVG(pro_price) AS average_price 
FROM 
products 
GROUP BY 
pro_com;


