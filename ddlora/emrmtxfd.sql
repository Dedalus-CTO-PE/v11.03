create table emrmtxaf
(
  emmxnat     varchar2(2) default ' ' not null,
  emmxbrg     varchar2(2) default ' ' not null,
  emmxpdg     varchar2(6) default ' ' not null,
  emmxspa     varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrmtxa1 primary key( 
emmxnat,
emmxbrg,
emmxpdg)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index emrmtxa2 on emrmtxaf
(
emmxbrg,
emmxnat,
emmxpdg
)
  tablespace pas_indx; 
create unique index emrmtxa3 on emrmtxaf
(
emmxpdg,
emmxbrg,
emmxnat
)
  tablespace pas_indx; 
