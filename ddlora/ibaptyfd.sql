create table ibaptyaf
(
  ibptcode    varchar2(3) default ' ' not null,
  ibptdesc    varchar2(35) default ' ' not null,
  ibptspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibaptya1 primary key( 
ibptcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
