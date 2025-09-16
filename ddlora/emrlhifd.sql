create table emrlhiaf
(
  emlhloca    varchar2(3) default ' ' not null,
  emlhscod    varchar2(3) default ' ' not null,
  emlhotyp    varchar2(1) default ' ' not null,
  emlhefdt    varchar2(8) default ' ' not null,
  emlheftm    varchar2(8) default ' ' not null,
  emlhdele    varchar2(1) default ' ' not null,
  emlhactv    varchar2(1) default ' ' not null,
  emlhssin    varchar2(1) default ' ' not null,
  emlhmaxp    number(4,0) default 0 not null,
  emlhcdat    varchar2(8) default ' ' not null,
  emlhctim    varchar2(8) default ' ' not null,
  emlhcuid    varchar2(10) default ' ' not null,
  emlhspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrlhia1 primary key( 
emlhloca,
emlhscod,
emlhefdt,
emlheftm)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index emrlhia2 on emrlhiaf
(
emlhcdat,
emlhctim,
emlhloca,
emlhscod,
emlhefdt,
emlheftm
)
  tablespace pas_indx; 
create unique index emrlhia3 on emrlhiaf
(
emlhdele,
emlhloca,
emlhscod,
emlhefdt,
emlheftm
)
  tablespace pas_indx; 
