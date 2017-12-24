/**
 * Created by alic(AlicFeng) on 17-8-8 from CLion.
 * Email is alic@samego.com
 */
//

#ifndef CLANG_HTTP_H
#define CLANG_HTTP_H

char *http_get(const char *url);

char *http_post(const char *url, const char *post_str);

#endif //CLANG_HTTP_H
