create table oprsiuaf
(
opsiitem    char(6),
opsidate    char(8),
opsiuniq    char(10),
opsispar    char(20),
lf          char(1)
);
create unique index oprsiua1 on oprsiuaf
(
opsiitem,
opsidate,
opsiuniq
);
create unique index oprsiua2 on oprsiuaf
(
opsiuniq,
opsidate,
opsiitem
);
revoke all on oprsiuaf from public ; 
grant select on oprsiuaf to public ; 
