create table ccsobpaf
(
  ccobcid     varchar2(6) default ' ' not null,
  ccobref     varchar2(3) default ' ' not null,
  ccobpri     number(14,2) default 0 not null,
  ccobspa     varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccsobpa1 primary key( 
ccobcid,
ccobref)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
