create table ccibauaf
(
  dccbabat    char(8) default ' ' not null,
  ccbadate    char(8) default ' ' not null,
  ccbaoper    char(4) default ' ' not null,
  ccbatrxt    decimal(1,0) default 0 not null,
  ccbaevnt    char(8) default ' ' not null,
  ccbaproc    char(7) default ' ' not null,
  ccbaurno    char(8) default ' ' not null,
  ccbaptyp    char(3) default ' ' not null,
  ccbaqnty    decimal(8,0) default 0 not null,
  ccbaordd    char(6) default ' ' not null,
  ccbaserv    char(1) default ' ' not null,
  ccbaspar    char(19) default ' ' not null,
  lf          char(1)
);
create  index ccibaua1 on ccibauaf
(
dccbabat,
ccbadate
);
revoke all on ccibauaf from public ; 
grant select on ccibauaf to public ; 
