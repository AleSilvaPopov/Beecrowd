SELECT
    REGEXP_REPLACE(n.cpf, '(\d{3})(\d{3})(\d{3})(\d{2})', '\1.\2.\3-\4') AS cpf_formatado
FROM
    natural_person AS n 
