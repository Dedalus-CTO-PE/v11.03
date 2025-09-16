create table watseiaf
(
wtsicons    char(6),
wtsiltyp    char(3),
wtsiuser    char(4),
wtsispar    char(30),
lf          char(1)
);
create unique index watseia1 on watseiaf
(
wtsicons,
wtsiltyp,
wtsiuser
);
create unique index watseia2 on watseiaf
(
wtsiuser,
wtsicons,
wtsiltyp
);
revoke all on watseiaf from public ; 
grant select on watseiaf to public ; 
