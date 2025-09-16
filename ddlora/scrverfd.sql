create table scrveraf
(
  scvesid     varchar2(12) default ' ' not null,
  scvever     varchar2(3) default ' ' not null,
  scvewho     varchar2(3) default ' ' not null,
  scvedat     varchar2(8) default ' ' not null,
  scvesrf     varchar2(8) default ' ' not null,
  scvequo     varchar2(8) default ' ' not null,
  scvespa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint scrvera1 primary key( 
scvesid,
scvever)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
