SELECT
    p.name,
    pr.name,
    p.price
FROM
    products AS p
JOIN
    providers AS pr ON p.id_providers = pr.id
JOIN 
    categories AS c ON p.id_categories = c.id
WHERE
    p.price > 1000
    AND
    c.name = 'Super Luxury';