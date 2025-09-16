create table ibasloaf
(
  ibsluser    varchar2(5) default ' ' not null,
  ibslpass    varchar2(20) default ' ' not null,
  ibslibas    varchar2(4) default ' ' not null,
  ibsldesc    varchar2(20) default ' ' not null,
  ibsldate    varchar2(8) default ' ' not null,
  ibslspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibasloa1 primary key( 
ibsluser)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
