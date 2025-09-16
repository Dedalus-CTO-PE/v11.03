create table csmceqaf
(
  cscecat     varchar2(7) default ' ' not null,
  cscedbs     varchar2(3) default ' ' not null,
  cscewar     varchar2(5) default ' ' not null,
  csceddes    varchar2(35) default ' ' not null,
  cscewdes    varchar2(35) default ' ' not null,
  cscestk     number(1,0) default 0 not null,
  cscesoh     number(14,2) default 0 not null,
  cscespa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint csmceqa1 primary key( 
cscecat,
cscedbs,
cscewar)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
