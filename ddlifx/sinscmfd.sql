create table sinscmaf
(
sisccon     char(10),
siscdes     char(40),
siscsdt     char(8),
siscfi2     char(2),
siscedt     char(8),
siscur1     char(15),
siscur2     char(15),
siscud1     char(8),
siscud2     char(8),
siscuc1     char(3),
siscuc2     char(3),
siscuy1     char(1),
siscuy2     char(1),
siscspa     char(22),
lf          char(1)
);
create unique index sinscma1 on sinscmaf
(
sisccon
);
revoke all on sinscmaf from public ; 
grant select on sinscmaf to public ; 
