SELECT
    c.name,
    o.id
FROM
    customers AS c
JOIN
    orders AS o ON o.id_customers = c.id 
WHERE
    o.orders_date >= '2016-01-01' AND o.orders_date <= '2016-06-30';