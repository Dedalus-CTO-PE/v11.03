create table webb2baf
(
  wbb2dnam    char(50) default ' ' not null,
  wbb2orgr    char(10) default ' ' not null,
  wbb2locn    char(8) default ' ' not null,
  wbb2hosp    char(3) default ' ' not null,
  wbb2orgn    char(200) default ' ' not null,
  wbb2ddes    char(100) default ' ' not null,
  wbb2dsta    char(30) default ' ' not null,
  wbb2dgdt    char(19) default ' ' not null,
  wbb2dedt    char(19) default ' ' not null,
  wbb2adks    char(30) default ' ' not null,
  wbb2adke    char(19) default ' ' not null,
  wbb2adde    char(19) default ' ' not null,
  wbb2gttk    char(1500) default ' ' not null,
  wbb2gtde    char(19) default ' ' not null,
  wbb2gtke    char(19) default ' ' not null,
  wbb2gtbr    char(10) default ' ' not null,
  wbb2gtex    char(4) default ' ' not null,
  wbb2dpth    char(200) default ' ' not null,
  wbb2cuid    char(10) default ' ' not null,
  wbb2cdat    char(8) default ' ' not null,
  wbb2ctim    char(8) default ' ' not null,
  wbb2uuid    char(10) default ' ' not null,
  wbb2udat    char(8) default ' ' not null,
  wbb2utim    char(8) default ' ' not null,
  wbb2spar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webb2ba1 on webb2baf
(
wbb2dnam,
wbb2orgr,
wbb2locn,
wbb2hosp
);
create unique index webb2ba2 on webb2baf
(
wbb2locn,
wbb2dnam,
wbb2orgr,
wbb2hosp
);
create unique index webb2ba3 on webb2baf
(
wbb2hosp,
wbb2dnam,
wbb2orgr,
wbb2locn
);
revoke all on webb2baf from public ; 
grant select on webb2baf to public ; 
