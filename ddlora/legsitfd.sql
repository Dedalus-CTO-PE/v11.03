create table legsitaf
(
  lostsite    varchar2(6) default ' ' not null,
  lostdesc    varchar2(30) default ' ' not null,
  lostpass    varchar2(8) default ' ' not null,
  lostfile    varchar2(3) default ' ' not null,
  lostsyst    varchar2(3) default ' ' not null,
  lostirng    varchar2(3) default ' ' not null,
  lostchrg    varchar2(1) default ' ' not null,
  lostcatg    varchar2(2) default ' ' not null,
  dlostmax    varchar2(3) default ' ' not null,
  lotstxbo    varchar2(2) default ' ' not null,
  lotstxat    varchar2(2) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint legsita1 primary key( 
lostsite)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index legsita2 on legsitaf
(
lostdesc,
lostsite
)
  tablespace pas_indx; 
