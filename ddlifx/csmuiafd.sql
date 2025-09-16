create table csmuiaaf
(
csuadbs     char(3),
csuacat     char(7),
csuatyp     decimal(2,0),
csuaspa     char(20),
lf          char(1)
);
create unique index csmuiaa1 on csmuiaaf
(
csuadbs,
csuacat
);
revoke all on csmuiaaf from public ; 
grant select on csmuiaaf to public ; 
