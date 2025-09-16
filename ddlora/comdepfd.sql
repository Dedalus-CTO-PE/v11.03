create table comdepaf
(
  cmdetdat    varchar2(8) default ' ' not null,
  cmderecn    varchar2(12) default ' ' not null,
  cmdetcnt    varchar2(5) default ' ' not null,
  cmdedtyp    varchar2(3) default ' ' not null,
  cmderrfn    varchar2(3) default ' ' not null,
  cmderefd    varchar2(8) default ' ' not null,
  cmdereft    varchar2(8) default ' ' not null,
  cmdeurno    varchar2(8) default ' ' not null,
  cmdeadmn    varchar2(8) default ' ' not null,
  cmdesflg    varchar2(1) default ' ' not null,
  cmdesyst    number(2,0) default 0 not null,
  cmdeprac    varchar2(6) default ' ' not null,
  cmdecdat    varchar2(8) default ' ' not null,
  cmdectim    varchar2(8) default ' ' not null,
  cmdecuid    varchar2(10) default ' ' not null,
  cmdeudat    varchar2(8) default ' ' not null,
  cmdeutim    varchar2(8) default ' ' not null,
  cmdeuuid    varchar2(10) default ' ' not null,
  cmdestat    varchar2(1) default ' ' not null,
  cmdeainv    varchar2(12) default ' ' not null,
  cmdesdoc    varchar2(10) default ' ' not null,
  cmdetrsf    varchar2(1) default ' ' not null,
  cmdespar    varchar2(26) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint comdepa1 primary key( 
cmderecn,
cmdetcnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index comdepa2 on comdepaf
(
cmdeadmn,
cmdestat,
cmderecn,
cmdetcnt
)
  tablespace pas_indx; 
create unique index comdepa3 on comdepaf
(
cmdeurno,
cmdestat,
cmdeadmn,
cmderecn,
cmdetcnt
)
  tablespace pas_indx; 
create unique index comdepa4 on comdepaf
(
cmdestat,
cmdeurno,
cmdesflg,
cmdeprac,
cmderecn,
cmdetcnt
)
  tablespace pas_indx; 
create unique index comdepa5 on comdepaf
(
cmdestat,
cmdetdat,
cmderecn,
cmdetcnt
)
  tablespace pas_indx; 
create unique index comdepa6 on comdepaf
(
cmdestat,
cmdeprac,
cmdeurno,
cmdesflg,
cmderecn,
cmdetcnt
)
  tablespace pas_indx; 
create unique index comdepa7 on comdepaf
(
cmdestat,
cmderefd,
cmderecn,
cmdetcnt
)
  tablespace pas_indx; 
