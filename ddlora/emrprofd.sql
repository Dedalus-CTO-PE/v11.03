create table emrproaf
(
  emprcode    varchar2(9) default ' ' not null,
  emprdesc    varchar2(70) default ' ' not null,
  emprhdpe    varchar2(6) default ' ' not null,
  emprspar    varchar2(14) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrproa1 primary key( 
emprcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index emrproa2 on emrproaf
(
emprdesc,
emprcode
)
  tablespace pas_indx; 
