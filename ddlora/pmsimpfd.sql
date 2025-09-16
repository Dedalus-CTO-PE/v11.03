create table pmsimpaf
(
  pmimcode    varchar2(7) default ' ' not null,
  pmimdesc    varchar2(50) default ' ' not null,
  pmimactv    varchar2(1) default ' ' not null,
  pmimdact    varchar2(8) default ' ' not null,
  pmimdiac    varchar2(8) default ' ' not null,
  pmimcuid    varchar2(10) default ' ' not null,
  pmimcdat    varchar2(8) default ' ' not null,
  pmimctim    varchar2(8) default ' ' not null,
  pmimuuid    varchar2(10) default ' ' not null,
  pmimudat    varchar2(8) default ' ' not null,
  pmimutim    varchar2(8) default ' ' not null,
  pmimhdpe    varchar2(7) default ' ' not null,
  pmimgcde    varchar2(3) default ' ' not null,
  pmimspar    varchar2(47) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsimpa1 primary key( 
pmimcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
