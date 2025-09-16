create table amsregaf
(
  amrereg     varchar2(2) default ' ' not null,
  amredes     varchar2(35) default ' ' not null,
  amreur1     varchar2(30) default ' ' not null,
  amreur2     varchar2(30) default ' ' not null,
  amreud1     varchar2(8) default ' ' not null,
  amreud2     varchar2(8) default ' ' not null,
  amreuy1     varchar2(1) default ' ' not null,
  amreuy2     varchar2(1) default ' ' not null,
  amrespa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint amsrega1 primary key( 
amrereg)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
