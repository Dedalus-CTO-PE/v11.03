create table patasfaf
(
  dptafadm    varchar2(8) default ' ' not null,
  ptaftype    varchar2(1) default ' ' not null,
  ptafdate    varchar2(8) default ' ' not null,
  ptaftime    varchar2(8) default ' ' not null,
  ptafcode    varchar2(1) default ' ' not null,
  ptafctyp    varchar2(1) default ' ' not null,
  ptafcrol    varchar2(1) default ' ' not null,
  ptafcsid    varchar2(5) default ' ' not null,
  ptafspar    varchar2(5) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patasfa1 primary key( 
dptafadm,
ptaftype,
ptafdate,
ptaftime)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
