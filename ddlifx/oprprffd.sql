create table oprprfaf
(
oppruniq    char(10),
opprteam    char(1),
opprpref    char(15),
opprdcod    char(6),
opprpqty    decimal(3,0),
opprspar    char(30),
lf          char(1)
);
create unique index oprprfa1 on oprprfaf
(
oppruniq,
opprteam,
opprdcod,
opprpref
);
revoke all on oprprfaf from public ; 
grant select on oprprfaf to public ; 
