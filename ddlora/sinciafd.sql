create table sinaudia
(
  siiaaudd    varchar2(8) default ' ' not null,
  siiaaudt    varchar2(8) default ' ' not null,
  siiaaudp    varchar2(2) default ' ' not null,
  siiaaudr    varchar2(1) default ' ' not null,
  siiaauds    number(1,0) default 0 not null,
  siiaaudo    varchar2(4) default ' ' not null,
  siiacat     varchar2(7) default ' ' not null,
  siiades     varchar2(60) default ' ' not null,
  siiasub     varchar2(5) default ' ' not null,
  siiaiss     varchar2(15) default ' ' not null,
  siiasti     varchar2(6) default ' ' not null,
  siiaavc     number(18,6) default 0 not null,
  siianat     varchar2(10) default ' ' not null,
  siiaabc     varchar2(1) default ' ' not null,
  siiapsc     varchar2(5) default ' ' not null,
  siiarex     number(1,0) default 0 not null,
  siianon     number(1,0) default 0 not null,
  siiasab     number(1,0) default 0 not null,
  siiasus     number(1,0) default 0 not null,
  siiadtc     varchar2(8) default ' ' not null,
  siiatmc     varchar2(5) default ' ' not null,
  siiausc     varchar2(4) default ' ' not null,
  siiaur1     varchar2(15) default ' ' not null,
  siiaur2     varchar2(15) default ' ' not null,
  siiaud1     varchar2(8) default ' ' not null,
  siiaud2     varchar2(8) default ' ' not null,
  siiauc1     varchar2(3) default ' ' not null,
  siiauc2     varchar2(3) default ' ' not null,
  siiauy1     varchar2(1) default ' ' not null,
  siiauy2     varchar2(1) default ' ' not null,
  siiaqin     varchar2(10) default ' ' not null,
  siiadun     varchar2(15) default ' ' not null,
  siiagst     varchar2(6) default ' ' not null,
  siiaactv    varchar2(1) default ' ' not null,
  siiaspa     varchar2(19) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index sinaudia on sinaudia
(
siiaaudd,
siiaaudt,
siiaaudp,
siiaaudr
)
tablespace pas_indx; 
create table sinciaaf
(
  siiacat     varchar2(7) default ' ' not null,
  siiades     varchar2(60) default ' ' not null,
  siiasub     varchar2(5) default ' ' not null,
  siiaiss     varchar2(15) default ' ' not null,
  siiasti     varchar2(6) default ' ' not null,
  siiaavc     number(18,6) default 0 not null,
  siianat     varchar2(10) default ' ' not null,
  siiaabc     varchar2(1) default ' ' not null,
  siiapsc     varchar2(5) default ' ' not null,
  siiarex     number(1,0) default 0 not null,
  siianon     number(1,0) default 0 not null,
  siiasab     number(1,0) default 0 not null,
  siiasus     number(1,0) default 0 not null,
  siiadtc     varchar2(8) default ' ' not null,
  siiatmc     varchar2(5) default ' ' not null,
  siiausc     varchar2(4) default ' ' not null,
  siiaur1     varchar2(15) default ' ' not null,
  siiaur2     varchar2(15) default ' ' not null,
  siiaud1     varchar2(8) default ' ' not null,
  siiaud2     varchar2(8) default ' ' not null,
  siiauc1     varchar2(3) default ' ' not null,
  siiauc2     varchar2(3) default ' ' not null,
  siiauy1     varchar2(1) default ' ' not null,
  siiauy2     varchar2(1) default ' ' not null,
  siiaqin     varchar2(10) default ' ' not null,
  siiadun     varchar2(15) default ' ' not null,
  siiagst     varchar2(6) default ' ' not null,
  siiaactv    varchar2(1) default ' ' not null,
  siiaspa     varchar2(19) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinciaa1 primary key( 
siiacat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sinciaa2 on sinciaaf
(
siiasub,
siiacat
)
  tablespace pas_indx; 
create unique index sinciaa3 on sinciaaf
(
siiades,
siiacat
)
  tablespace pas_indx; 
