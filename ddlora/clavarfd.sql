create table clavaraf
(
  cavrsite    varchar2(2) default ' ' not null,
  cavrvist    varchar2(8) default ' ' not null,
  cavruniq    varchar2(2) default ' ' not null,
  cavrtheu    varchar2(10) default ' ' not null,
  cavrcode    varchar2(3) default ' ' not null,
  cavrfree    varchar2(50) default ' ' not null,
  cavrdate    varchar2(8) default ' ' not null,
  cavrtime    varchar2(5) default ' ' not null,
  dcavrnum    varchar2(9) default ' ' not null,
  cavrdoct    varchar2(6) default ' ' not null,
  cavrthet    varchar2(6) default ' ' not null,
  cavrcod9    varchar2(9) default ' ' not null,
  cavrcodc    varchar2(3) default ' ' not null,
  cavrdesc    varchar2(30) default ' ' not null,
  cavrspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint clavara1 primary key( 
cavrsite,
cavrvist,
cavruniq,
cavrtheu)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create  index clavara2 on clavaraf
(
cavrsite,
cavruniq,
cavrcode
)
  tablespace pas_indx; 
create  index clavara3 on clavaraf
(
cavrsite,
cavruniq,
cavrdate
)
  tablespace pas_indx; 
create  index clavara4 on clavaraf
(
cavrsite,
cavruniq,
cavrtime
)
  tablespace pas_indx; 
create  index clavara5 on clavaraf
(
cavrsite,
cavruniq,
dcavrnum
)
  tablespace pas_indx; 
create  index clavara6 on clavaraf
(
cavrsite,
cavruniq,
cavrdoct
)
  tablespace pas_indx; 
create  index clavara7 on clavaraf
(
cavrsite,
cavruniq,
cavrthet
)
  tablespace pas_indx; 
create  index clavara8 on clavaraf
(
cavrsite,
cavruniq,
cavrcod9
)
  tablespace pas_indx; 
create  index clavara9 on clavaraf
(
cavrsite,
cavruniq,
cavrcodc
)
  tablespace pas_indx; 
