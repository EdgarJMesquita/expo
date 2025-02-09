import { css } from '@emotion/react';
import { theme } from '@expo/styleguide';
import React from 'react';

const STYLES_HIGHLIGHT = css`
  text-shadow: ${theme.palette.yellow7} 0px 0px 10px, ${theme.palette.yellow7} 0px 0px 10px,
    ${theme.palette.yellow7} 0px 0px 10px, ${theme.palette.yellow7} 0px 0px 10px;
`;

const Highlight = ({ children }: React.PropsWithChildren<object>) => (
  <span css={STYLES_HIGHLIGHT}>{children}</span>
);

export default Highlight;
