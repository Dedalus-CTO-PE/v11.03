create table ibaseqaf
(
  ibsqtype    varchar2(8) default ' ' not null,
  ibsqnext    number(10,0) default 0 not null,
  ibsqdesc    varchar2(50) default ' ' not null,
  ibsqmaxm    number(10,0) default 0 not null,
  ibsqspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibaseqa1 primary key( 
ibsqtype)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
