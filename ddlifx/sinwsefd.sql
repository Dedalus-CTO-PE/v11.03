create table sinwseaf
(
siwsuid     char(4),
siwswar     char(5),
siwslev     decimal(1,0),
siwsspa     char(20),
lf          char(1)
);
create unique index sinwsea1 on sinwseaf
(
siwsuid,
siwswar
);
create unique index sinwsea2 on sinwseaf
(
siwswar,
siwsuid
);
revoke all on sinwseaf from public ; 
grant select on sinwseaf to public ; 
