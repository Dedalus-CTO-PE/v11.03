create table watscuaf
(
wtscdate    char(6),
wtscunit    char(3),
wtscdoct    char(6),
wtscprty    char(3),
wtscsbeu    decimal(6,0),
wtscsbes    decimal(6,0),
wtscsseu    decimal(6,0),
wtscsues    decimal(6,0),
wtsclpun    decimal(6,0),
wtsclpsu    decimal(6,0),
wtscdelt    decimal(6,0),
wtscspar    char(3),
lf          char(1)
);
create unique index watscua1 on watscuaf
(
wtscdate,
wtscunit,
wtscdoct,
wtscprty
);
revoke all on watscuaf from public ; 
grant select on watscuaf to public ; 
