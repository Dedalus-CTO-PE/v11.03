create table websgpaf
(
wbsgusid    char(10),
wbsggrpc    char(10),
wbsgspar    char(25),
lf          char(1)
);
create unique index websgpa1 on websgpaf
(
wbsgusid,
wbsggrpc
);
create unique index websgpa2 on websgpaf
(
wbsggrpc,
wbsgusid
);
revoke all on websgpaf from public ; 
grant select on websgpaf to public ; 
