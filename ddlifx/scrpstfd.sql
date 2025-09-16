create table scrpstaf
(
  scpspid     char(8) default ' ' not null,
  scpssid     char(2) default ' ' not null,
  scpsrow     char(2) default ' ' not null,
  scpscol     char(3) default ' ' not null,
  scpsitm     char(5) default ' ' not null,
  scpslen     decimal(3,0) default 0 not null,
  scpsman     decimal(1,0) default 0 not null,
  scpsatt     char(1) default ' ' not null,
  scpsnor     decimal(2,0) default 0 not null,
  scpsmty     char(5) default ' ' not null,
  scpsfmt     char(25) default ' ' not null,
  scpsspa     char(5) default ' ' not null,
  lf          char(1)
);
create unique index scrpsta1 on scrpstaf
(
scpspid,
scpssid,
scpsrow,
scpscol
);
create unique index scrpsta2 on scrpstaf
(
scpspid,
scpssid,
scpsitm,
scpsrow,
scpscol
);
revoke all on scrpstaf from public ; 
grant select on scrpstaf to public ; 
