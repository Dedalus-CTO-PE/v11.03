create table webb2baf
(
  wbb2dnam    varchar2(50) default ' ' not null,
  wbb2orgr    varchar2(10) default ' ' not null,
  wbb2locn    varchar2(8) default ' ' not null,
  wbb2hosp    varchar2(3) default ' ' not null,
  wbb2orgn    varchar2(200) default ' ' not null,
  wbb2ddes    varchar2(100) default ' ' not null,
  wbb2dsta    varchar2(30) default ' ' not null,
  wbb2dgdt    varchar2(19) default ' ' not null,
  wbb2dedt    varchar2(19) default ' ' not null,
  wbb2adks    varchar2(30) default ' ' not null,
  wbb2adke    varchar2(19) default ' ' not null,
  wbb2adde    varchar2(19) default ' ' not null,
  wbb2gttk    varchar2(1500) default ' ' not null,
  wbb2gtde    varchar2(19) default ' ' not null,
  wbb2gtke    varchar2(19) default ' ' not null,
  wbb2gtbr    varchar2(10) default ' ' not null,
  wbb2gtex    varchar2(4) default ' ' not null,
  wbb2dpth    varchar2(200) default ' ' not null,
  wbb2cuid    varchar2(10) default ' ' not null,
  wbb2cdat    varchar2(8) default ' ' not null,
  wbb2ctim    varchar2(8) default ' ' not null,
  wbb2uuid    varchar2(10) default ' ' not null,
  wbb2udat    varchar2(8) default ' ' not null,
  wbb2utim    varchar2(8) default ' ' not null,
  wbb2spar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webb2ba1 primary key( 
wbb2dnam,
wbb2orgr,
wbb2locn,
wbb2hosp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webb2ba2 on webb2baf
(
wbb2locn,
wbb2dnam,
wbb2orgr,
wbb2hosp
)
  tablespace pas_indx; 
create unique index webb2ba3 on webb2baf
(
wbb2hosp,
wbb2dnam,
wbb2orgr,
wbb2locn
)
  tablespace pas_indx; 
