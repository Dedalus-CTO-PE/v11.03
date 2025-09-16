create table webrgmaf
(
wbrggrid    char(5),
wbrgdesc    char(35),
wbrgspar    char(80),
lf          char(1)
);
create unique index webrgma1 on webrgmaf
(
wbrggrid
);
revoke all on webrgmaf from public ; 
grant select on webrgmaf to public ; 
