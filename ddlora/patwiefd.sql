create table patwieaf
(
  ptwidrgc    varchar2(4) default ' ' not null,
  ptwidrgd    varchar2(60) default ' ' not null,
  ptwivrsn    varchar2(3) default ' ' not null,
  ptwisdmt    varchar2(1) default ' ' not null,
  ptwimvel    varchar2(1) default ' ' not null,
  ptwicpay    varchar2(3) default ' ' not null,
  ptwilibp    number(4,0) default 0 not null,
  ptwihibp    number(4,0) default 0 not null,
  ptwiilos    number(6,2) default 0 not null,
  ptwisdod    varchar2(1) default ' ' not null,
  ptwitdsw    number(10,4) default 0 not null,
  ptwitodw    number(10,4) default 0 not null,
  ptwitlom    number(10,4) default 0 not null,
  ptwitimw    number(10,4) default 0 not null,
  ptwithom    number(10,4) default 0 not null,
  ptwithih    number(10,4) default 0 not null,
  ptwissdr    varchar2(1) default ' ' not null,
  ptwisswt    number(10,4) default 0 not null,
  ptwispar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patwiea1 primary key( 
ptwidrgc,
ptwivrsn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
