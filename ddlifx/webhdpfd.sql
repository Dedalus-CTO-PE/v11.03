create table webhdpaf
(
wbhdhid     char(2),
wbhdfil     char(8),
wbhdpath    char(60),
wbhdspa     char(20),
lf          char(1)
);
create unique index webhdpa1 on webhdpaf
(
wbhdhid,
wbhdfil
);
revoke all on webhdpaf from public ; 
grant select on webhdpaf to public ; 
