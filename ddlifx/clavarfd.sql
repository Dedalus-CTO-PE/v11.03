create table clavaraf
(
  cavrsite    char(2) default ' ' not null,
  cavrvist    char(8) default ' ' not null,
  cavruniq    char(2) default ' ' not null,
  cavrtheu    char(10) default ' ' not null,
  cavrcode    char(3) default ' ' not null,
  cavrfree    char(50) default ' ' not null,
  cavrdate    char(8) default ' ' not null,
  cavrtime    char(5) default ' ' not null,
  dcavrnum    char(9) default ' ' not null,
  cavrdoct    char(6) default ' ' not null,
  cavrthet    char(6) default ' ' not null,
  cavrcod9    char(9) default ' ' not null,
  cavrcodc    char(3) default ' ' not null,
  cavrdesc    char(30) default ' ' not null,
  cavrspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index clavara1 on clavaraf
(
cavrsite,
cavrvist,
cavruniq,
cavrtheu
);
create  index clavara2 on clavaraf
(
cavrsite,
cavruniq,
cavrcode
);
create  index clavara3 on clavaraf
(
cavrsite,
cavruniq,
cavrdate
);
create  index clavara4 on clavaraf
(
cavrsite,
cavruniq,
cavrtime
);
create  index clavara5 on clavaraf
(
cavrsite,
cavruniq,
dcavrnum
);
create  index clavara6 on clavaraf
(
cavrsite,
cavruniq,
cavrdoct
);
create  index clavara7 on clavaraf
(
cavrsite,
cavruniq,
cavrthet
);
create  index clavara8 on clavaraf
(
cavrsite,
cavruniq,
cavrcod9
);
create  index clavara9 on clavaraf
(
cavrsite,
cavruniq,
cavrcodc
);
revoke all on clavaraf from public ; 
grant select on clavaraf to public ; 
