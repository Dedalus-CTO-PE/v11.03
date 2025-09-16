create table ccsdeqaf
(
  ccdeport    varchar2(2) default ' ' not null,
  ccdehcd     varchar2(2) default ' ' not null,
  ccdedpt     varchar2(8) default ' ' not null,
  ccdedes     varchar2(35) default ' ' not null,
  ccdenum     number(10,2) default 0 not null,
  ccdestd     number(14,2) default 0 not null,
  ccdeact     number(14,2) default 0 not null,
  ccdebud     number(14,2) default 0 not null,
  ccdespa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccsdeqa1 primary key( 
ccdeport,
ccdehcd,
ccdedpt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
