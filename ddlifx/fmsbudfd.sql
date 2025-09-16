create table fmsaudbu
(
  fmbuaudd    char(8) default ' ' not null,
  fmbuaudt    char(8) default ' ' not null,
  fmbuaudp    char(2) default ' ' not null,
  fmbuaudr    char(1) default ' ' not null,
  fmbuauds    decimal(1,0) default 0 not null,
  fmbuaudo    char(4) default ' ' not null,
  fmbuculd    char(2) default ' ' not null,
  fmbucuac    char(12) default ' ' not null,
  fmbucupr    char(3) default ' ' not null,
  fmbuca01    decimal(14,2) default 0 not null,
  fmbuca02    decimal(14,2) default 0 not null,
  fmbuca03    decimal(14,2) default 0 not null,
  fmbuca04    decimal(14,2) default 0 not null,
  fmbuca05    decimal(14,2) default 0 not null,
  fmbuca06    decimal(14,2) default 0 not null,
  fmbuca07    decimal(14,2) default 0 not null,
  fmbuca08    decimal(14,2) default 0 not null,
  fmbuca09    decimal(14,2) default 0 not null,
  fmbuca10    decimal(14,2) default 0 not null,
  fmbuca11    decimal(14,2) default 0 not null,
  fmbuca12    decimal(14,2) default 0 not null,
  fmbuca13    decimal(14,2) default 0 not null,
  fmbucb01    decimal(12,0) default 0 not null,
  fmbucb02    decimal(12,0) default 0 not null,
  fmbucb03    decimal(12,0) default 0 not null,
  fmbucb04    decimal(12,0) default 0 not null,
  fmbucb05    decimal(12,0) default 0 not null,
  fmbucb06    decimal(12,0) default 0 not null,
  fmbucb07    decimal(12,0) default 0 not null,
  fmbucb08    decimal(12,0) default 0 not null,
  fmbucb09    decimal(12,0) default 0 not null,
  fmbucb10    decimal(12,0) default 0 not null,
  fmbucb11    decimal(12,0) default 0 not null,
  fmbucb12    decimal(12,0) default 0 not null,
  fmbucb13    decimal(12,0) default 0 not null,
  fmbucc01    decimal(9,0) default 0 not null,
  fmbucc02    decimal(9,0) default 0 not null,
  fmbucc03    decimal(9,0) default 0 not null,
  fmbucc04    decimal(9,0) default 0 not null,
  fmbucc05    decimal(9,0) default 0 not null,
  fmbucc06    decimal(9,0) default 0 not null,
  fmbucc07    decimal(9,0) default 0 not null,
  fmbucc08    decimal(9,0) default 0 not null,
  fmbucc09    decimal(9,0) default 0 not null,
  fmbucc10    decimal(9,0) default 0 not null,
  fmbucc11    decimal(9,0) default 0 not null,
  fmbucc12    decimal(9,0) default 0 not null,
  fmbucc13    decimal(9,0) default 0 not null,
  fmbucusp    char(20) default ' ' not null,
  lf          char(1)
);
create index fmsaudbu on fmsaudbu
(
fmbuaudd,
fmbuaudt,
fmbuaudp,
fmbuaudr
);
revoke all on fmsaudbu from public ; 
grant select on fmsaudbu to public ; 
create table fmsbxxxx
(
  fmbuculd    char(2) default ' ' not null,
  fmbucuac    char(12) default ' ' not null,
  fmbucupr    char(3) default ' ' not null,
  fmbuca01    decimal(14,2) default 0 not null,
  fmbuca02    decimal(14,2) default 0 not null,
  fmbuca03    decimal(14,2) default 0 not null,
  fmbuca04    decimal(14,2) default 0 not null,
  fmbuca05    decimal(14,2) default 0 not null,
  fmbuca06    decimal(14,2) default 0 not null,
  fmbuca07    decimal(14,2) default 0 not null,
  fmbuca08    decimal(14,2) default 0 not null,
  fmbuca09    decimal(14,2) default 0 not null,
  fmbuca10    decimal(14,2) default 0 not null,
  fmbuca11    decimal(14,2) default 0 not null,
  fmbuca12    decimal(14,2) default 0 not null,
  fmbuca13    decimal(14,2) default 0 not null,
  fmbucb01    decimal(12,0) default 0 not null,
  fmbucb02    decimal(12,0) default 0 not null,
  fmbucb03    decimal(12,0) default 0 not null,
  fmbucb04    decimal(12,0) default 0 not null,
  fmbucb05    decimal(12,0) default 0 not null,
  fmbucb06    decimal(12,0) default 0 not null,
  fmbucb07    decimal(12,0) default 0 not null,
  fmbucb08    decimal(12,0) default 0 not null,
  fmbucb09    decimal(12,0) default 0 not null,
  fmbucb10    decimal(12,0) default 0 not null,
  fmbucb11    decimal(12,0) default 0 not null,
  fmbucb12    decimal(12,0) default 0 not null,
  fmbucb13    decimal(12,0) default 0 not null,
  fmbucc01    decimal(9,0) default 0 not null,
  fmbucc02    decimal(9,0) default 0 not null,
  fmbucc03    decimal(9,0) default 0 not null,
  fmbucc04    decimal(9,0) default 0 not null,
  fmbucc05    decimal(9,0) default 0 not null,
  fmbucc06    decimal(9,0) default 0 not null,
  fmbucc07    decimal(9,0) default 0 not null,
  fmbucc08    decimal(9,0) default 0 not null,
  fmbucc09    decimal(9,0) default 0 not null,
  fmbucc10    decimal(9,0) default 0 not null,
  fmbucc11    decimal(9,0) default 0 not null,
  fmbucc12    decimal(9,0) default 0 not null,
  fmbucc13    decimal(9,0) default 0 not null,
  fmbucusp    char(20) default ' ' not null,
  lf          char(1)
);
create unique index fmsbuda1 on fmsbxxxx
(
fmbuculd,
fmbucuac
);
create unique index fmsbuda2 on fmsbxxxx
(
fmbucupr,
fmbuculd,
fmbucuac
);
revoke all on fmsbxxxx from public ; 
grant select on fmsbxxxx to public ; 
