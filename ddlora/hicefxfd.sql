create table hicefxaf
(
  hcexbtch    varchar2(5) default ' ' not null,
  hcextype    varchar2(1) default ' ' not null,
  hcexdate    varchar2(8) default ' ' not null,
  hcexfnam    varchar2(30) default ' ' not null,
  hcexspar    varchar2(60) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hicefxa1 primary key( 
hcexbtch,
hcextype,
hcexdate,
hcexfnam)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
