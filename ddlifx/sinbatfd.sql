create table sinbataf
(
sibtpon     char(7),
sibtreq     char(8),
sibtcst     char(5),
sibtqty     decimal(12,2),
sibtiss     decimal(12,2),
sibtspa     char(10),
lf          char(1)
);
create unique index sinbata1 on sinbataf
(
sibtpon,
sibtreq
);
revoke all on sinbataf from public ; 
grant select on sinbataf to public ; 
