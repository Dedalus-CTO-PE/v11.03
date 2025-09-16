create table csmskyaf
(
csskkwd     char(15),
csskcrd     char(5),
csskspa     char(10),
lf          char(1)
);
create unique index csmskya1 on csmskyaf
(
csskkwd,
csskcrd
);
create unique index csmskya2 on csmskyaf
(
csskcrd,
csskkwd
);
revoke all on csmskyaf from public ; 
grant select on csmskyaf to public ; 
