create table sincuaaf
(
sicudat     char(8),
sicutim     char(8),
sicuuni     char(2),
sicusup     char(5),
sicucat     char(7),
sicusut     char(15),
sicutyp     decimal(2,0),
sicudes1    char(60),
sicudes2    char(60),
sicuspa     char(20),
lf          char(1)
);
create unique index sincuaa1 on sincuaaf
(
sicudat,
sicutim,
sicuuni
);
create unique index sincuaa2 on sincuaaf
(
sicucat,
sicudat,
sicutim,
sicuuni
);
create unique index sincuaa3 on sincuaaf
(
sicusup,
sicudat,
sicutim,
sicuuni
);
revoke all on sincuaaf from public ; 
grant select on sincuaaf to public ; 
