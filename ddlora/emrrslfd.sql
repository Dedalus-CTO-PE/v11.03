create table emrrslaf
(
  emrsresp    varchar2(3) default ' ' not null,
  emrssdat    varchar2(8) default ' ' not null,
  emrstype    varchar2(2) default ' ' not null,
  emrsself    varchar2(10) default ' ' not null,
  emrsselt    varchar2(10) default ' ' not null,
  emrsstat    varchar2(1) default ' ' not null,
  emrscuid    varchar2(10) default ' ' not null,
  emrscdat    varchar2(8) default ' ' not null,
  emrsctim    varchar2(8) default ' ' not null,
  emrsuuid    varchar2(10) default ' ' not null,
  emrsudat    varchar2(8) default ' ' not null,
  emrsutim    varchar2(8) default ' ' not null,
  emrsspar    varchar2(60) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrrsla1 primary key( 
emrsresp,
emrssdat,
emrstype,
emrsself,
emrsselt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
