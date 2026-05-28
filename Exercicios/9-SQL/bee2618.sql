SELECT
    p.name,
    pr.name,
    c.name
FROM
    products AS p
JOIN
    providers AS pr ON p.id_providers = pr.id
JOIN
    categories AS c ON p.id_categories = c.id
WHERE
    pr.name = 'Sansul SA'
    AND c.name = 'Imported';