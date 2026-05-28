SELECT
    c.name
FROM 
    customers AS c
JOIN
    legal_person AS lp ON c.id = lp.id_customers;