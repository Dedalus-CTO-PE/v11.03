create table outvacaf
(
otvacode    char(3),
otvadate    char(8),
otvawght    decimal(8,4),
otvaamnt    decimal(14,2),
otvaspar    char(50),
lf          char(1)
);
create unique index outvaca1 on outvacaf
(
otvacode,
otvadate
);
create unique index outvaca2 on outvacaf
(
otvadate,
otvacode
);
revoke all on outvacaf from public ; 
grant select on outvacaf to public ; 
